//
// Created by Filip Lux on 24.11.16.
//

#ifndef NN_NEURON_FCLAYER_H
#define NN_NEURON_FCLAYER_H

#include "Layer.h"

/**
*@brief FullConnected layer
*/
class FCLayer : public Layer{
public:


    /**
    *@brief constructor for the first layer
    *@param inputs number of inputs
    *@param neurons number of neurons
    */
    FCLayer(int &inputs, int &neurons);

    /**
    *@brief constructor for the upper layers
    *@param inputs number of inputs
    *@param neurons number of neurons
    *@param lower lower layer
    */
    FCLayer(int &inputs, int &neurons, Layer* lower);

    /**
    *@brief constructor for the upper layers
    *@param inputs number of inputs
    *@param neurons number of neurons
    *@param lower lower layer
    *@param weights vector of loaded weights
    */
    FCLayer(int &inputs, int &neurons, Layer* lower, std::vector<double> weights);

    /**
    *@brief forward
    */
    void forward_layer();

    /**
    * @brief backpropagation
    */

    void backProp_layer();

    /**
    * @brief backpropagation for last layer
    * @param result vector of expecting answer
    */
    void backProp_layer(std::vector <double> &result);

    /**
    * @brief print weights
    */

    void learn();
    /**
    * @brief unsert new values to input
    */
    void update_input(double* in);

    /**
    * @brief print
    */
    void print();

    /**
    * @brief destructor
    */
    ~FCLayer();

    int getType() const { return 2; }

};


#endif //NN_NEURON_FCLAYER_H
