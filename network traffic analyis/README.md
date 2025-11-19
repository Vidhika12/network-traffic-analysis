# 🛡️ Network Traffic Analysis for Intrusion Detection  
**Dataset:** CICIDS 2017 (Canadian Institute for Cybersecurity)  
**Author:** Vidhika Singh  

---

## 📘 Overview  
This project performs **Exploratory Data Analysis (EDA)** on a real-world network traffic dataset to identify **patterns, correlations, and anomalies** related to cyber attacks.  
The goal is to gain insights into how malicious traffic differs from normal traffic using data-driven methods.

This project combines my two fields of interest — **Data Science** and **Cybersecurity** 💻🔐

---

## 🎯 Objectives  
- Understand the structure of real network traffic data  
- Identify different types of attacks (DDoS, PortScan, etc.)  
- Explore key features like flow duration, bytes, and packet behavior  
- Visualize attack distributions and feature correlations  
- Prepare the data for future ML-based intrusion detection systems  

---

## 🧰 Tools and Libraries  
  Purpose - Library 
  Data Handling - pandas, numpy
  Visualization -matplotlib,seaborn, plotly
  Machine Learning (optional) - scikit-learn
  Notebook Environment - jupyter

---

## 🧩 Dataset Details  
- **Source:** [Canadian Institute for Cybersecurity - CICIDS 2017](https://www.unb.ca/cic/datasets/ids-2017.html)  
- **Subset Used:** `Wednesday-workingHours.pcap_ISCX.csv` (contains multiple attack types)  
- **Size (after sampling):** 10,000 rows for analysis  
- **Features include:** Flow Duration, Packet Length, Protocol, Source/Destination Port, Bytes, etc.  

---

## 📊 Exploratory Data Analysis  
The notebook includes:
1. Loading and previewing the dataset  
2. Checking missing values, data types, and duplicates  
3. Visualizing:
   - Attack type distribution  
   - Correlation heatmaps  
   - Packet and flow feature distributions  
4. Deriving insights about attack characteristics  

---

## 🧠 Key Insights (Sample Highlights)  
> - DDoS and PortScan attacks dominate malicious traffic.  
> - Flow Duration and Bytes/s differ drastically between benign and attack connections.  
> - Certain protocols (TCP, UDP) are more targeted by attackers.  

---

## 🪄 Future Work  
- Build a **Machine Learning model** (Random Forest / SVM) for automatic attack classification.  
- Extend EDA to other days of CICIDS dataset.  
- Deploy a dashboard for real-time monitoring using Streamlit.  

---

## 🧾 Project Structure  
