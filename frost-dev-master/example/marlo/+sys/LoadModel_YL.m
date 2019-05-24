function robot = LoadModel_YL(urdf)
    robot = MARLO_YL(urdf);
    configureDynamics(robot, 'DelayCoriolisSet', false);
end

