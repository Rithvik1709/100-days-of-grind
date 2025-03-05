# Machine Learning Algorithms 

## 1️⃣ Supervised Learning Algorithms

### 📌 **1.1 Linear Regression**
- Used for predicting a continuous target variable.
- Finds the best-fit line by minimizing the error (Ordinary Least Squares method).
- Equation:
  \[
  y = \beta_0 + \beta_1x + \epsilon
  \]
- **Use Case:** House Price Prediction

### 📌 **1.2 Logistic Regression**
- Used for binary or multi-class classification.
- Uses the sigmoid function to model probabilities.
- Equation:
  \[
  P(y=1|X) = \frac{1}{1 + e^{-z}}, \quad z = \beta_0 + \beta_1x
  \]
- **Use Case:** Spam Email Detection

### 📌 **1.3 Decision Trees**
- Splits data into branches using features to reach a decision.
- Works well for classification and regression.
- **Use Case:** Loan Approval System

### 📌 **1.4 Random Forest**
- An ensemble method that builds multiple decision trees and averages their results.
- Reduces overfitting compared to a single decision tree.
- **Use Case:** Stock Market Prediction

### 📌 **1.5 Support Vector Machines (SVM)**
- Finds the best hyperplane that maximizes the margin between classes.
- Uses kernel functions for non-linearly separable data.
- **Use Case:** Face Recognition

### 📌 **1.6 k-Nearest Neighbors (kNN)**
- Classifies a data point based on the majority class of its nearest neighbors.
- Sensitive to choice of **k** and distance metric.
- **Use Case:** Recommendation Systems

### 📌 **1.7 Naive Bayes**
- Probabilistic classifier based on Bayes' theorem.
- Assumes independence between features.
- **Use Case:** Sentiment Analysis

### 📌 **1.8 Gradient Boosting & XGBoost**
- Builds trees sequentially, correcting errors from previous trees.
- XGBoost is an optimized version, faster and more efficient.
- **Use Case:** Fraud Detection

## 2️⃣ Unsupervised Learning Algorithms

### 📌 **2.1 K-Means Clustering**
- Groups similar data points into **K** clusters.
- Minimizes intra-cluster variance.
- **Use Case:** Customer Segmentation

### 📌 **2.2 Hierarchical Clustering**
- Builds a hierarchy of clusters without predefining K.
- Uses **agglomerative (bottom-up)** or **divisive (top-down)** approach.
- **Use Case:** DNA Classification

### 📌 **2.3 Principal Component Analysis (PCA)**
- Reduces dimensionality while preserving variance.
- Converts correlated features into linearly uncorrelated components.
- **Use Case:** Image Compression

## 3️⃣ Reinforcement Learning Algorithms

### 📌 **3.1 Q-Learning**
- Model-free RL algorithm that learns optimal policies.
- Uses a **Q-table** to store action-reward values.
- **Use Case:** Game Playing (Atari, Chess AI)

### 📌 **3.2 Deep Q-Networks (DQN)**
- Uses neural networks to approximate Q-values.
- Handles large state spaces efficiently.
- **Use Case:** Self-Driving Cars

## 4️⃣ Deep Learning Algorithms

### 📌 **4.1 Artificial Neural Networks (ANN)**
- Made up of layers of neurons (input, hidden, output layers).
- Uses activation functions (ReLU, Sigmoid, Softmax).
- **Use Case:** Image Recognition

### 📌 **4.2 Convolutional Neural Networks (CNN)**
- Designed for image processing tasks.
- Uses convolutional layers, pooling layers, and fully connected layers.
- **Use Case:** Object Detection

### 📌 **4.3 Recurrent Neural Networks (RNN)**
- Used for sequential data.
- Maintains memory of past inputs using hidden states.
- **Use Case:** Text Generation

### 📌 **4.4 Long Short-Term Memory (LSTM)**
- An advanced version of RNNs with better memory retention.
- Overcomes vanishing gradient problems.
- **Use Case:** Speech Recognition

### 📌 **4.5 Generative Adversarial Networks (GANs)**
- Consists of a Generator and a Discriminator.
- Used for data generation (images, videos, music).
- **Use Case:** Deepfake Generation

## Conclusion
Machine learning encompasses a wide range of algorithms, each suited for different tasks. The choice of algorithm depends on the nature of the data, computational resources, and problem requirements.

