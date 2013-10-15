# Created by: Pawel Pekala <pawel@FreeBSD.org>
# $FreeBSD: mail/claws-mail-pgp/Makefile 329440 2013-10-05 11:25:29Z pawel $

PORTNAME=	pgp
PORTREVISION=	0

COMMENT=	PGP plugins for Claws Mail

LIB_DEPENDS=	libgpgme.so:${PORTSDIR}/security/gpgme

CLAWS_PLUGINS_BUILD=	pgpcore pgpinline pgpmime smime

.include "../claws-mail/Makefile.claws"
.include <bsd.port.mk>
