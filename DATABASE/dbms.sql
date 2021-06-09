-- phpMyAdmin SQL Dump
-- version 4.9.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Nov 04, 2019 at 08:42 AM
-- Server version: 10.4.8-MariaDB
-- PHP Version: 7.3.11

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `dbms`
--

-- --------------------------------------------------------

--
-- Table structure for table `result`
--

CREATE TABLE `result` (
  `rn` int(255) NOT NULL,
  `ITM1` int(255) DEFAULT NULL,
  `ITM2` int(255) DEFAULT NULL,
  `ITM` int(255) DEFAULT NULL,
  `COA1` int(255) DEFAULT NULL,
  `COA2` int(255) DEFAULT NULL,
  `COA` int(255) DEFAULT NULL,
  `OOPS1` int(255) DEFAULT NULL,
  `OOPS2` int(255) DEFAULT NULL,
  `OOPS` int(255) DEFAULT NULL,
  `SEPM1` int(255) DEFAULT NULL,
  `SEPM2` int(255) DEFAULT NULL,
  `SEPM` int(255) DEFAULT NULL,
  `MATHS1` int(255) DEFAULT NULL,
  `MATHS2` int(255) DEFAULT NULL,
  `MATHS` int(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `result`
--

INSERT INTO `result` (`rn`, `ITM1`, `ITM2`, `ITM`, `COA1`, `COA2`, `COA`, `OOPS1`, `OOPS2`, `OOPS`, `SEPM1`, `SEPM2`, `SEPM`, `MATHS1`, `MATHS2`, `MATHS`) VALUES
(1, 10, 11, 11, 10, 133, 72, 10, 15, 13, 10, 319, 165, 10, 10, 10),
(2, 10, 10, 10, 12, 23, 18, 13, 20, 17, 15, 12, 14, 16, 16, 16);

-- --------------------------------------------------------

--
-- Table structure for table `student`
--

CREATE TABLE `student` (
  `rn` int(255) NOT NULL,
  `password` text DEFAULT '12345',
  `name` text NOT NULL,
  `phone` int(255) NOT NULL,
  `email` text NOT NULL,
  `course` text NOT NULL,
  `admitted_in` int(255) NOT NULL,
  `dob` text NOT NULL,
  `gender` text NOT NULL,
  `address` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `student`
--

INSERT INTO `student` (`rn`, `password`, `name`, `phone`, `email`, `course`, `admitted_in`, `dob`, `gender`, `address`) VALUES
(1, '123456', 'ANKIT YADAV', 95946, 'A@A', 'MASTER OF COMPUTER APPLICATION', 2016, '07041996', 'MALE', 'MULUND EAST'),
(2, '12345', 'SURAJ RAMA YADAB', 0, '', 'MASTER OF COMPUTER', 2019, '', '', '');

-- --------------------------------------------------------

--
-- Table structure for table `teacher`
--

CREATE TABLE `teacher` (
  `id` varchar(50) NOT NULL,
  `password` text NOT NULL,
  `name` text NOT NULL,
  `subject` text NOT NULL,
  `phone` int(50) NOT NULL,
  `email` text NOT NULL,
  `dob` text NOT NULL,
  `gender` text NOT NULL,
  `address` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `teacher`
--

INSERT INTO `teacher` (`id`, `password`, `name`, `subject`, `phone`, `email`, `dob`, `gender`, `address`) VALUES
('1', '123456', 'KAJAL JEWANI ', 'OOPS', 956545, 'K@K', '07041996', 'FEMALE', 'MULUND EAST'),
('2', '12345', 'RAMESH SOLANKI', 'ITM', 0, '', '', '', 'VASHI NAKA');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `result`
--
ALTER TABLE `result`
  ADD PRIMARY KEY (`rn`);

--
-- Indexes for table `student`
--
ALTER TABLE `student`
  ADD PRIMARY KEY (`rn`);

--
-- Indexes for table `teacher`
--
ALTER TABLE `teacher`
  ADD PRIMARY KEY (`id`);

--
-- Constraints for dumped tables
--

--
-- Constraints for table `result`
--
ALTER TABLE `result`
  ADD CONSTRAINT `result_ibfk_1` FOREIGN KEY (`rn`) REFERENCES `student` (`rn`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
