 % PMSM Motor Parameters (Y-2012-2)
% -------------------------------------------------
% Electrical parameters
Rs  = 2.9;        % Stator resistance [Ohm]
Ls  = 12.4e-3;      % inductance [H]

lamdaM = 0.062;  % Permanent magnet flux linkage λ_m [Wb]

% Pole pairs
P = 4;             % Number of pole pairs
gama = 0.92;
Vdc = 510;
T_max = 3.8;
ma = .95;

% -------------------------------------------------
% Mechanical parameters
J = 2.6e-5;        % Rotor inertia [kg*m^2]
B = 9.55e-5;       % Viscous friction coefficient [N*m*s/rad]
Tc = 0.03;
T_period = 1/15000;
Ts = 1e-5;

%------------------------------------
%Wn = (Rs / Ls) /(1-gama);
Wn = (1500*2*pi)/2;
zeta = .9;
Wc_speed = Wn/10;
% -------------------------------------------------
% Derived motor constants
Kt = (3/2)*P*lamdaM;   % Torque constant [N*m/A]
Ke = P*lamdaM;         % Back-EMF constant [V*s/rad]
Kp_current = ((2*zeta*Wn)-(Rs/Ls))*Ls;
Ki_current = Wn^2 * Ls;

a_s = B/J;                % [1/s]
b_s = Kt/J;               % [(rad/s^2)/A]

Kp_speed = (2*zeta*Wc_speed - a_s)/b_s;   % [A/(rad/s)]
Ki_speed = (Wc_speed^2)/b_s;              % [A/rad]

% -------------------------------------------------
% Rated / operating conditions
rpm_ref = 1500;                    % Speed reference [rpm]
wm_ref  = rpm_ref * 2*pi/60;       % Mechanical speed [rad/s]
we_ref  = P * wm_ref;              % Electrical speed [rad/s]
fe_ref  = we_ref / (2*pi);         % Electrical frequency [Hz]

% -------------------------------------------------
% Display parameters
disp('--- PMSM Parameters Loaded ---')
disp(['Rs       = ', num2str(Rs), ' Ohm'])
disp(['Ld       = ', num2str(Ls), ' H']) 
disp(['Lq       = ', num2str(Ls), ' H'])
disp(['lamdaM = ', num2str(lamdaM), ' Wb'])
disp(['p        = ', num2str(P)])
disp(['Kt       = ', num2str(Kt), ' N*m/A'])
disp(['Speed    = ', num2str(rpm_ref), ' rpm'])
disp(['f_e      = ', num2str(fe_ref), ' Hz'])
