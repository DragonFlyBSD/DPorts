# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: www/p5-HTML-RSSAutodiscovery/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	HTML-RSSAutodiscovery
PORTVERSION=	1.21
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	gslin@gslin.org
COMMENT=	Methods for retrieving RSS-ish information from an HTML document

BUILD_DEPENDS=	p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		HTML::RSSAutodiscovery.3

NO_STAGE=	yes
.include <bsd.port.mk>
