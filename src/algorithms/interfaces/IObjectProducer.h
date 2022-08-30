// Created by Dmitry Romanov
// Subject to the terms in the LICENSE file found in the top-level directory.
//

#ifndef EICRECON_IOBJECTPRODUCER_H
#define EICRECON_IOBJECTPRODUCER_H

namespace eicrecon {

    /** This class is just a binding intention.
     * of any that inherits this should have a method that takes one type and
     * based on whatever logic produces another class. It is very relevant for
     * hit level conversions like:
     *
     * SimulatedHit -> ISingleProducer.produce -> DigitalizationHit
     *
     * There might be many other applications
     */
    template <typename InputT, typename OutputT>
    class IObjectProducer {

        virtual OutputT* produce(const InputT*) = 0;
    };

} // eicrecon

#endif //EICRECON_IOBJECTPRODUCER_H
