# CarND-Controls-PID

---

### Write-up

#### 1. Compiling

The code compiles without errors using cmake and make.

#### 2. Implementation
In PID.cpp the error, derivative of error, and integral of error are calculated. Then, the appropriate gains are applied to each to obtain the PID output.

#### 3. Effects

The proportional gain will decrease the error. The integral gain will eliminate the steady-state error. The derivative gain will reduce the oscillations and overshoot created by the other gains.

#### 3. Hyperparameters

The hyperparameters were chosen through manual tuning. First, the proportional gain was increased until the error oscilated around zero. Then, the derivative gain was increased to reduce these oscillations. No integral gain was used bevause the setpoint changes every time there is a turn. These values could then be used as a prior for another optimitization algorithm. 

#### 4. Simulation

The car drives safely throught the simulated trip.