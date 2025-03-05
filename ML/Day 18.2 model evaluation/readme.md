# 📊 Machine Learning Model Evaluation

This project demonstrates the evaluation of a supervised machine learning model using the **Breast Cancer Dataset**. The model is assessed using key metrics such as **Accuracy, Precision, Recall, F1-Score, and AUC-ROC Curve**.

---

## 📂 Project Structure

```
ML_Evaluation_Project/
│── breast_cancer_data.csv  # Dataset
│── evaluate_model.py  # Code for model evaluation
│── ML_Evaluation.ipynb  # Jupyter Notebook with explanations
│── README.md  # Project documentation
```

---

## 📌 Dataset

The dataset used is the **Breast Cancer Dataset** from Scikit-Learn. It contains multiple features related to cell characteristics and a **target** column indicating whether the tumor is malignant (1) or benign (0).



---

## 🚀 How to Run

### 1️⃣ **Set Up the Environment**
Install the required dependencies:

```bash
pip install numpy pandas scikit-learn matplotlib
```

### 2️⃣ **Run the Evaluation Script**
Navigate to the `src/` folder and run:

```bash
python evaluate_model.py
```

This will output evaluation metrics and display the **ROC Curve**.

### 3️⃣ **Explore the Jupyter Notebook**
To interactively explore the dataset and metrics, open the notebook:

```bash
jupyter notebook notebooks/ML_Evaluation.ipynb
```

---

## 📊 Evaluation Metrics
The model is evaluated based on:

- **Accuracy**: Measures overall correctness.
- **Precision**: How many predicted positive cases were actually positive.
- **Recall (Sensitivity)**: How many actual positive cases were correctly predicted.
- **F1-Score**: Harmonic mean of Precision & Recall.
- **AUC-ROC Curve**: Measures the classifier's ability to distinguish between classes.

---

## 📈 Results
Upon execution, the script will display the following metrics:

```bash
Accuracy: 0.96
Precision: 0.98
Recall: 0.94
F1-Score: 0.96
```