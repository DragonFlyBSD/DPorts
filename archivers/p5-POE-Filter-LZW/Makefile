# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: archivers/p5-POE-Filter-LZW/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	POE-Filter-LZW
PORTVERSION=	1.7.2
CATEGORIES=	archivers perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:R}${PORTVERSION:E}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	POE filter wrapped around Compress::LZW

BUILD_DEPENDS=	p5-Compress-LZW>=0:${PORTSDIR}/archivers/p5-Compress-LZW \
		p5-POE>=0.38:${PORTSDIR}/devel/p5-POE
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		POE::Filter::LZW.3

.include <bsd.port.mk>
