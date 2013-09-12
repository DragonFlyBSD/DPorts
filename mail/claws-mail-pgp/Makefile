# Created by: Pawel Pekala <pawel@FreeBSD.org>
# $FreeBSD: mail/claws-mail-pgp/Makefile 325602 2013-08-29 15:01:46Z pawel $

PORTNAME=	pgp
PORTREVISION=	0

COMMENT=	PGP plugins for Claws Mail

LIB_DEPENDS=	libgpgme.so:${PORTSDIR}/security/gpgme

CLAWS_PLUGINS_BUILD=	pgpcore pgpinline pgpmime smime

.include "../claws-mail/Makefile.claws"
.include <bsd.port.mk>
