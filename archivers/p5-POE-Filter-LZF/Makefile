# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: archivers/p5-POE-Filter-LZF/Makefile 319959 2013-06-05 08:08:59Z mat $

PORTNAME=	POE-Filter-LZF
PORTVERSION=	1.7.0
CATEGORIES=	archivers perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:BINGOS
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:R}${PORTVERSION:E}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	POE filter wrapped around Compress::LZF

BUILD_DEPENDS=	p5-Compress-LZF>=1.51:${PORTSDIR}/archivers/p5-Compress-LZF \
		p5-POE>=0.38:${PORTSDIR}/devel/p5-POE
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		POE::Filter::LZF.3

.include <bsd.port.mk>
