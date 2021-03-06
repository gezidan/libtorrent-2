#ifndef TORRENT_SHA512_HPP_INCLUDED
#define TORRENT_SHA512_HPP_INCLUDED

#include "libtorrent/config.hpp"
#include <cstdint>

namespace libtorrent
{

	struct sha512_ctx
	{
		std::uint64_t length, state[8];
		std::size_t curlen;
		std::uint8_t buf[128];
	};

	TORRENT_EXTRA_EXPORT int SHA512_init(sha512_ctx* context);
	TORRENT_EXTRA_EXPORT int SHA512_update(sha512_ctx* context
		, std::uint8_t const* data, std::size_t len);
	TORRENT_EXTRA_EXPORT int SHA512_final(std::uint8_t* digest, sha512_ctx* context);
}

#endif
