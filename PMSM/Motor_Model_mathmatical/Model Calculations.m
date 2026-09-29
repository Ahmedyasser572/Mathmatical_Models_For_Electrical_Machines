% PMSM Motor Parameters (Y-2012-2)
% -------------------------------------------------
% Electrical parameters
Rs  = 1.45;        % Stator resistance [Ohm]
Ld  = 0.0062;      % d-axis inductance [H]
Lq  = 0.0062;      % q-axis inductance [H]
lambda_m = 0.062;  % Permanent magnet flux linkage λ_m [Wb]

% Pole pairs
p = 4;             % Number of pole pairs

% -------------------------------------------------
% Mechanical parameters
J = 2.6e-5;        % Rotor inertia [kg*m^2]
B = 9.55e-5;       % Viscous friction coefficient [N*m*s/rad]

% -------------------------------------------------
% Derived motor constants
Kt = (3/2)*p*lambda_m;   % Torque constant [N*m/A]
Ke = p*lambda_m;         % Back-EMF constant [V*s/rad]

% -------------------------------------------------
% Rated / operating conditions
rpm_ref = 1500;                    % Speed reference [rpm]
wm_ref  = rpm_ref * 2*pi/60;       % Mechanical speed [rad/s]
we_ref  = p * wm_ref;              % Electrical speed [rad/s]
fe_ref  = we_ref / (2*pi);         % Electrical frequency [Hz]

% -------------------------------------------------
% Display parameters
disp('--- PMSM Parameters Loaded ---')
disp(['Rs       = ', num2str(Rs), ' Ohm'])
disp(['Ld       = ', num2str(Ld), ' H'])
disp(['Lq       = ', num2str(Lq), ' H'])
disp(['lambda_m = ', num2str(lambda_m), ' Wb'])
disp(['p        = ', num2str(p)])
disp(['Kt       = ', num2str(Kt), ' N*m/A'])
disp(['Speed    = ', num2str(rpm_ref), ' rpm'])
disp(['f_e      = ', num2str(fe_ref), ' Hz'])
