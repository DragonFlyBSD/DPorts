# Created by: Joseph Scott (<joseph@randomnetworks.com>)
# $FreeBSD: www/pear-HTTP_Client/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	HTTP_Client
PORTVERSION=	1.2.1
CATEGORIES=	www pear

MAINTAINER=	joseph@randomnetworks.com
COMMENT=	PEAR classes for high level HTTP requests

BUILD_DEPENDS=	${PEARDIR}/HTTP.php:${PORTSDIR}/www/pear-HTTP \
		${PEARDIR}/HTTP/Request.php:${PORTSDIR}/www/pear-HTTP_Request
RUN_DEPENDS=	${PEARDIR}/HTTP.php:${PORTSDIR}/www/pear-HTTP \
		${PEARDIR}/HTTP/Request.php:${PORTSDIR}/www/pear-HTTP_Request

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
