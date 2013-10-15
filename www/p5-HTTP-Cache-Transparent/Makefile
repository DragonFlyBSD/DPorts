# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: www/p5-HTTP-Cache-Transparent/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	HTTP-Cache-Transparent
PORTVERSION=	1.1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Implementation of http get that keeps a local cache of fetched pages

BUILD_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww

USES=		perl5
USE_PERL5=	configure
MAN3=		HTTP::Cache::Transparent.3

NO_STAGE=	yes
.include <bsd.port.mk>
