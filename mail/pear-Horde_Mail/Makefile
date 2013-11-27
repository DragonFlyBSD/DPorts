# $FreeBSD: mail/pear-Horde_Mail/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	Horde_Mail
PORTVERSION=	2.1.2
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
