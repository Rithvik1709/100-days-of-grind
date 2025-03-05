# Day 18 - Evaluating Supervised Learning Models

## 📝 Overview
Model evaluation is crucial for assessing machine learning model performance. This guide covers key metrics including **Precision, Recall, F1-Score, and AUC-ROC**.

## 📌 Topics Covered
- **Accuracy**: Overall correctness of predictions.
- **Precision**: True positives out of predicted positives.
- **Recall (Sensitivity)**: True positives out of actual positives.
- **F1-Score**: Balance between Precision and Recall.
- **AUC-ROC**: Model's ability to distinguish between classes.

## 📂 Files
- `dataset.csv` - Sample dataset for evaluation.
- `model_evaluation.py` - Implements model evaluation metrics.

## 🔢 Key Formulas
\[
Accuracy = \frac{TP + TN}{TP + TN + FP + FN}
\]
\[
Precision = \frac{TP}{TP + FP}
\]
\[
Recall = \frac{TP}{TP + FN}
\]
\[
F1 = 2 \times \frac{Precision \times Recall}{Precision + Recall}
\]

## ⚡ Running the Code
```bash
pip install numpy pandas matplotlib scikit-learn
python model_evaluation.py
