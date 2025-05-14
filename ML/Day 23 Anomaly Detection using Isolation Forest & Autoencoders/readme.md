🔍 Day 25 - Anomaly Detection with Isolation Forest & Autoencoders
📄 Dataset Description

We simulate a dataset with two features:

280 normal samples (clustered around mean = 0)
20 anomalous samples (clustered around mean = 6)
Labels:

0 = normal
1 = anomaly (ground truth)
Predictions:

Anomaly_IF: Detected by Isolation Forest
Anomaly_AE: Detected by Autoencoder
✅ Why This is Important
Anomaly Detection is crucial in:

Fraud detection
Network intrusion detection
Medical diagnosis
Predictive maintenance
By learning both tree-based (Isolation Forest) and neural-based (Autoencoder) methods, you gain exposure to:

Unsupervised learning
Handling imbalanced data
Real-world fault detection scenarios
🧠 Techniques Used
Isolation Forest: Detects outliers by isolating them with fewer random splits.
Autoencoders: Neural networks trained to reconstruct inputs. High reconstruction error indicates an anomaly.
