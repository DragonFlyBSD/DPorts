# Created by: Pawel Pekala <pawel@FreeBSD.org>
# $FreeBSD: mail/claws-mail-pgp/Makefile 336489 2013-12-14 22:02:10Z pawel $

PORTNAME=	pgp
PORTREVISION=	0

COMMENT=	PGP plugins for Claws Mail

LIB_DEPENDS=	libgpgme.so:${PORTSDIR}/security/gpgme

CLAWS_PLUGINS_BUILD=	pgpcore pgpinline pgpmime smime

.include "../claws-mail/Makefile.claws"
.include <bsd.port.mk>
