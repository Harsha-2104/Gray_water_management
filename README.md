# Gray Water Management System (GWMS)

## Abstract

Gray water is wastewater from sources such as kitchens, bathrooms, and laundry, essentially soiled fresh water. In India, approximately 80% of household water usage results in gray water. If an individual uses 55 liters of water per day, about 44 liters are wasted. The Gray Water Management System (GWMS) focuses on the **3R Rule of Water:**

- **REDUCE** fresh water usage for toilet flushing.
- **REUSE** gray water for gardening and flushing.
- **RECHARGE** groundwater through filtration techniques.

This project integrates IoT technology to automate water management in households. Smart taps equipped with ultrasonic and IR sensors help control water flow by detecting human presence and hand placement. The system collects and filters gray water, stores it in a Gray Water Tank (GWT), and uses a water motor, relay modules, and solenoid valves to manage flow. A water level sensor in the toilet flush tank detects water levels, directing overflow to a recharge pit.

The GWMS aligns with the **Swachh Bharat Campaign**, offering an easy-to-install, cost-effective solution that any household can implement to promote sustainable water usage.

---

## Block Diagram

Below is the block diagram representing the working principle of the GWMS:

![Block Diagram](image.png)

---

## Procedure

### Step 1: Components Required

- **Microcontroller (Arduino) for automation**
- **Water level sensor** (for monitoring flush tank levels)
- **Ultrasonic & IR sensors** (for smart taps)
- **Water motor and solenoid valves** (for controlled water flow)
- **Relay Modules** (to control solenoid valves via Arduino)
- **Filtration system** (for purifying gray water)
- **Storage tanks** (Gray Water Tank & Recharge Pit)

### Step 2: Installation & Setup

1. **Household Water Collection**
   - Collect gray water from kitchens, bathrooms, and laundry.
   - Direct it into a **Filtration Tank** for initial purification.

2. **Storage in Gray Water Tank (GWT)**
   - Store the filtered gray water in GWT for reuse.
   - Connect the tank to a **Water Motor**, **Relay Modules**, and **Solenoid Valves** to control flow.

3. **Automated Toilet Flush System**
   - Attach a **Water Level Sensor** inside the toilet flush tank.
   - If the flush tank is **not full**, water from GWT will be used.
   - If the flush tank is **full**, the motor redirects water to the **Recharge Pit**.

4. **Smart Tap Integration**
   - Install **Ultrasonic & IR Sensors** in taps.
   - These sensors detect human presence and hand placement to regulate water flow.

5. **Automated Control with Arduino & Relay Modules**
   - Connect the water level sensor, motor, relay modules, and solenoid valves to Arduino.
   - Use IoT-based programming to automate water redirection.
   - Relay modules will act as a switch to control solenoid valves efficiently.

### Step 3: Testing & Optimization

- **Monitor water flow and storage levels** using IoT dashboards.
- **Fine-tune sensor thresholds** for optimal tap and tank operations.
- **Regularly clean the filtration system** to maintain efficiency.

---

## Conclusion

The **Gray Water Management System (GWMS)** is a sustainable and automated solution to water conservation in households. By implementing this system, households can significantly reduce fresh water usage, reuse gray water efficiently, and contribute to groundwater recharge. The system is aligned with India's **Swachh Bharat Mission**, making it an impactful and eco-friendly initiative.

### Future Scope

- **Integration with IoT platforms** for remote monitoring.
- **Advanced filtration techniques** for better water quality.
- **Scalability to larger communities and apartments.**

By adopting GWMS, we take a step forward in sustainable water management and environmental conservation.

