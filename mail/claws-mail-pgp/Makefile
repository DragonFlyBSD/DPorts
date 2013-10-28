# Created by: Pawel Pekala <pawel@FreeBSD.org>
# $FreeBSD: mail/claws-mail-pgp/Makefile 331057 2013-10-20 19:20:15Z jhale $

PORTNAME=	pgp
PORTREVISION=	1

COMMENT=	PGP plugins for Claws Mail

LIB_DEPENDS=	libgpgme.so:${PORTSDIR}/security/gpgme

CLAWS_PLUGINS_BUILD=	pgpcore pgpinline pgpmime smime

.include "../claws-mail/Makefile.claws"
.include <bsd.port.mk>
