// Copyright (c) 2009-2012 The Bitcoin developers
// Copyright (c) 2011-2012 Litecoin Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <boost/assign/list_of.hpp> // for 'map_list_of()'
#include <boost/foreach.hpp>

#include "checkpoints.h"

#include "main.h"
#include "uint256.h"

namespace Checkpoints
{
    typedef std::map<int, uint256> MapCheckpoints;

    //
    // What makes a good checkpoint block?
    // + Is surrounded by blocks with reasonable timestamps
    //   (no blocks before with a timestamp after, none after with
    //    timestamp before)
    // + Contains no strange transactions
    //

// FBX
    static MapCheckpoints mapCheckpoints =
        boost::assign::map_list_of
        (    50, uint256("0x4f8a5ab946d64c19a4f3dacffc6014e47735fd12984e89d7436790accb115a3b"))
        (    57, uint256("0x034a3d32d1324130954f33ee7ad008012373ec93d01540d2a1a85d30a19770ed"))
        (  5000, uint256("0x9289ee81e679e10e6ed01232e70c19c9ef9682a38489227cd521a0136649b1ad"))
        ( 15000, uint256("0x7c7fc755c19616fd3eb156b53dae2bbf058972e0731f3d0ee54785cc222f4bbf"))
        (114000, uint256("0xf863ed327eede0641e1be668d43144e67c52c0785524faff2dd1a21bbdeabfbe"))
        (116144, uint256("0x7d0f9db5dbb9378ddd5bdd173b3c71fef8808690adec8ecc0bbb1b3648871b76"))
        (120000, uint256("0x8eba390707d2de0af87f7f6c1e191de995a351d3cb1ac1667d83c207f4580217"))
        (123340, uint256("0xfc425e4e4044bb8016a5bf7a3a8daaf5e5753017cd82c76cb8f168791b5b1986"))
        (125000, uint256("0x24d37d00a27106edb6acd213914b89c64396eef2a8e7957d22a46779b1300d9f"))
        (125882, uint256("0x350844dc30528e80f61ec00abb6c822493d401a165e0ef94ee0667ef8b76cf96"))
        (128935, uint256("0x6272ad45f8a3933718635c81eaf89a8c1271dea1f8ac776db091b6f7109be390"))
        (130000, uint256("0x96078b2d0c993fbee6041620a25076e7960e384bb3a5a4147b44f900687a3cf5"))
        (131555, uint256("0x52d456035f3dc3942d0aeb5662522f5bad59fc70f7e420917a140cf4b31320b0"))
        (135000, uint256("0xfdd4f9980cb734537e613718271a17b2d65169751779130839c59f8b62b4ed07"))
        (137210, uint256("0x35aefe3d8fad5952fa921ea0b235a7732b380af5d6a2e9e7cf757daf3f44a1b1"))
        (140000, uint256("0x9945603d44043bead1fb58733af3485346afcaf30cc34662792b7c761cb6a363"))
        (145000, uint256("0x03a40c535e5255708fcabce83c72adac5e6104bc018d27741ab3a5cb0bce635e"))
        (148092, uint256("0x8e87a19fe174db177ab5e0424037ce8218dfbfb4b53ac76b97190da62005bd92"))
        (150000, uint256("0x4991ffa9b3e1b33c187c2a49370ecc060d81f0af49f06b80df369360a9769d84"))
        (160000, uint256("0x60c3c7d8c15a9fc9144e2329b04e3cfd7564ab7b8a36cdd799fbb137c0c3d8c1"))
        (163185, uint256("0x17ff28e0320ad9ad3a88aea59781c4194cb2d488a6f512f8f6634c52a1bfd6bb"))
        (165000, uint256("0x7207c10a2953745431bc856edeab5577ed42e213bba9b3b6b44c438cd64cd7ff"))
        (167940, uint256("0x7e8cd2599a5f542db6ae5a70cb3943154e26cdda9b392f0e52241cc054054cbc"))
        (170000, uint256("0xc045a739a481f31fca80b97ce44e0e50a3bbabbed6d1ee2cc2a057003e0a8f1f"))
        ;
/*
    static MapCheckpoints mapCheckpoints =
        boost::assign::map_list_of
        (     1, uint256("0x80ca095ed10b02e53d769eb6eaf92cd04e9e0759e5be4a8477b42911ba49c78f"))
        (     2, uint256("0x13957807cdd1d02f993909fa59510e318763f99a506c4c426e3b254af09f40d7"))
        (  1500, uint256("0x841a2965955dd288cfa707a755d05a54e45f8bd476835ec9af4402a2b59a2967"))
        (  4032, uint256("0x9ce90e427198fc0ef05e5905ce3503725b80e26afd35a987965fd7e3d9cf0846"))
        (  8064, uint256("0xeb984353fc5190f210651f150c40b8a4bab9eeeff0b729fcb3987da694430d70"))
        ( 16128, uint256("0x602edf1859b7f9a6af809f1d9b0e6cb66fdc1d4d9dcd7a4bec03e12a1ccd153d"))
        ( 23420, uint256("0xd80fdf9ca81afd0bd2b2a90ac3a9fe547da58f2530ec874e978fce0b5101b507"))
        ( 50000, uint256("0x69dc37eb029b68f075a5012dcc0419c127672adb4f3a32882b2b3e71d07a20a6"))
        ( 80000, uint256("0x4fcb7c02f676a300503f49c764a89955a8f920b46a8cbecb4867182ecdb2e90a"))
        (120000, uint256("0xbd9d26924f05f6daa7f0155f32828ec89e8e29cee9e7121b026a7a3552ac6131"))
        (161500, uint256("0xdbe89880474f4bb4f75c227c77ba1cdc024991123b28b8418dbbf7798471ff43"))
        (179620, uint256("0x2ad9c65c990ac00426d18e446e0fd7be2ffa69e9a7dcb28358a50b2b78b9f709"))
        ;


    static MapCheckpoints mapCheckpointsTestnet =
        boost::assign::map_list_of
        ( 546, uint256("000000002a936ca763904c3c35fce2f3556c559c0214345d31b1bcebf76acb70"))
        ;
*/
    bool CheckBlock(int nHeight, const uint256& hash)
    {
        if (fTestNet) return true; // Testnet has no checkpoints

        MapCheckpoints::const_iterator i = mapCheckpoints.find(nHeight);
        if (i == mapCheckpoints.end()) return true;
        return hash == i->second;
    }

    int GetTotalBlocksEstimate()
    {
        if (fTestNet) return 0;

        return mapCheckpoints.rbegin()->first;
    }

    CBlockIndex* GetLastCheckpoint(const std::map<uint256, CBlockIndex*>& mapBlockIndex)
    {
        if (fTestNet) return NULL;

        BOOST_REVERSE_FOREACH(const MapCheckpoints::value_type& i, mapCheckpoints)
        {
            const uint256& hash = i.second;
            std::map<uint256, CBlockIndex*>::const_iterator t = mapBlockIndex.find(hash);
            if (t != mapBlockIndex.end())
                return t->second;
        }
        return NULL;
    }
}
