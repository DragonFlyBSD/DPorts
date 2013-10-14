# Created by: Alex Deiter <Alex.Deiter@Gmail.COM>
# $FreeBSD: www/p5-HTML-Toc/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	HTML-Toc
PORTVERSION=	1.12
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	alex.deiter@gmail.com
COMMENT=	Generate, insert and update HTML Table of Contents

BUILD_DEPENDS=	p5-Test-Differences>=0:${PORTSDIR}/devel/p5-Test-Differences \
		p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

NO_STAGE=	yes
.include <bsd.port.mk>
