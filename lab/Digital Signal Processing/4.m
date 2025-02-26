function [y, n] = sigshift(x, m, k)
    % This function shifts a digital signal by k units.
    % Inputs:
    %   x: Signal values
    %   m: Time indices
    %   k: Shift amount
    % Outputs:
    %   y: Shifted signal values
    %   n: Shifted time indices
    
    % Shift the time indices by k units
    n = m + k;
    
    % Signal values remain unchanged
    y = x;
end

% Example usage
x = [1, 2, 3, 4]; % Signal values
m = [0, 1, 2, 3]; % Time indices
k = 2;            % Shift amount (right shift by 2 units)

[y, n] = sigshift(x, m, k);

% Display results
disp('Shifted Signal Values:');
disp(y);
disp('Shifted Time Indices:');
disp(n);

% Plot the original and shifted signals
figure;

% Original signal
subplot(2, 1, 1);
stem(m, x, 'b', 'LineWidth', 1.5);
title('Original Signal');
xlabel('n');
ylabel('x[n]');
grid on;

% Shifted signal
subplot(2, 1, 2);
stem(n, y, 'r', 'LineWidth', 1.5);
title(['Shifted Signal by ', num2str(k), ' units']);
xlabel('n');
ylabel('y[n]');
grid on;
