# $FreeBSD: mail/pear-Horde_Mail/Makefile 325255 2013-08-23 08:30:45Z mm $

PORTNAME=	Horde_Mail
PORTVERSION=	2.1.0
CATEGORIES=	mail www pear

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Mail Library

USE_HORDE_RUN=	Horde_Exception \
		Horde_Stream_Filter

# Disabled due to circular dependency
#USE_HORDE_RUN+=	Horde_Mime

# Optional but we want it
RUN_DEPENDS+=	${PEARDIR}/Net/SMTP.php:${PORTSDIR}/net/pear-Net_SMTP

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
