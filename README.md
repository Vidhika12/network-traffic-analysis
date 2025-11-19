# Network Traffic Analysis – Brute Force Attack Detection (EDA)

This project analyzes network flow data to understand behavioral differences between **Benign traffic**, **FTP-Patator**, and **SSH-Patator** brute-force attacks.  
The goal is to identify how malicious traffic differs from normal activity using Exploratory Data Analysis (EDA).


## 🔍 Key Insights (Quick Summary)

### **1. Class Imbalance**
- Benign: ~97%  
- FTP-Patator + SSH-Patator: very rare (brute-force attacks)  
This mirrors real network environments where attacks appear far less frequently than normal traffic.

### **2. Flow Duration**
- SSH-Patator: longer, slower flows  
- FTP-Patator: short, fast attack bursts  
- Benign: wide variation  

### **3. Packet Behavior**
- Benign traffic → high and irregular packet counts  
- Attack traffic → low and consistent packet counts (automated activity)

### **4. Timing Patterns**
- FTP-Patator → extremely low forward IAT (rapid attempts)  
- Benign → natural human delays → higher variability

### **5. Multi-feature Behavior**
- Pairplots show tight clusters for attack traffic  
- Benign traffic is highly scattered  


# 📁 Folder Structure
network traffic analysis
─data
─notebooks
─outputs
─README.md



# 📊 Visualizations Included

- Traffic label distribution  
- Boxplots (Flow Duration, Fwd/Back packets, IAT)  
- Histograms  
- Correlation heatmap  
- Pairplot analysis  

Each plot includes a written interpretation and cybersecurity insight.


# 🧠 Objective

To study differences between **benign network flows** and **automated brute-force attacks** using:
- Packet volume  
- Duration  
- Inter-arrival time  
- Flow statistics  
- Header-level metrics  

This EDA forms the foundation for intrusion detection and cybersecurity analytics.


# 🧪 Dataset Details

Dataset contains 3 labels:

 Label      - Description 
 Benign     - Normal user traffic 
 FTP-Patator- FTP brute-force login attempts 
 SSH-Patator- SSH brute-force login attempts 

This makes it well-suited for network security and ML-based intrusion detection projects.


# 🛠️ Tech Stack

- Python  
- Pandas  
- NumPy  
- Seaborn  
- Matplotlib  
- Jupyter Notebook  


# 🔬 Detailed Analysis Overview

### **1. Class Distribution**
Benign traffic dominates the dataset (~97%), while attacks are rare—common in real network environments.

### **2. Flow Duration**
- SSH flows tend to last longer (encryption + handshake overhead)  
- FTP attacks are rapid  
- Benign flows vary greatly depending on user behavior  

### **3. Forward & Backward Packets**
- Benign: more and variable packet exchange  
- Attacks: low + uniform packet counts  
Shows automated vs human behavior differences.

### **4. Timing (IAT)**
- Attack traffic sends packets rapidly  
- Benign traffic shows natural pauses, scrolling, delays  

### **5. Correlation**
Some packet features correlate strongly with attack patterns.

### **6. Pairplots**
Attack points cluster tightly → repetitive automated attempts  
Benign spreads widely → real user activity  


# 📌 Conclusion

This exploratory analysis demonstrates that simple flow-level features—packet counts, durations, and timing—can effectively differentiate brute-force attacks from normal traffic.  
These insights can support:

- Intrusion detection systems (IDS)  
- Feature engineering  
- ML model development  
- Threat monitoring research  

This project forms the base for building a **Machine Learning-based intrusion detection model** in future work.


# 🚀 Future Improvements

- Build ML classifiers (Random Forest, XGBoost, SVM)  
- Feature ranking (ANOVA, mutual info)  
- Real-time dashboard visualization  
- Multi-dataset comparison  
- Model deployment  


# 🤝 Acknowledgement

Dataset inspired by the Canadian Institute for Cybersecurity (CIC-IDS).


