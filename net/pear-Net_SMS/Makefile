# Created by: chinsan <chinsan.tw@gmail.com>
# $FreeBSD: net/pear-Net_SMS/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	Net_SMS
PORTVERSION=	0.2.0
CATEGORIES=	net pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR SMS functionality

BUILD_DEPENDS=	${PEARDIR}/Mail.php:${PORTSDIR}/mail/pear-Mail \
		${PEARDIR}/HTTP/Request.php:${PORTSDIR}/www/pear-HTTP_Request
RUN_DEPENDS=	${PEARDIR}/Mail.php:${PORTSDIR}/mail/pear-Mail \
		${PEARDIR}/HTTP/Request.php:${PORTSDIR}/www/pear-HTTP_Request

USE_PHP=	gettext
PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
