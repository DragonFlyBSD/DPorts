# $FreeBSD: net/rubygem-amqp067/Makefile 332047 2013-10-30 02:53:47Z swills $

PORTNAME=	amqp
PORTVERSION=	0.6.7
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	An implementation of the AMQP protocol for RabbitMQ clients

RUN_DEPENDS=	rubygem-eventmachine>=0.12.4:${PORTSDIR}/devel/rubygem-eventmachine

NO_LATEST_LINK=	yes
PORTSCOUT=	limit:0.6.7

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

PKGNAMESUFFIX=	067

.include <bsd.port.mk>
