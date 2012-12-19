# New ports collection makefile for:	p5-POE-Filter-LZO
# Date created:		2006-09-10
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/archivers/p5-POE-Filter-LZO/Makefile,v 1.12 2012/11/17 05:54:22 svnexp Exp $
#

PORTNAME=	POE-Filter-LZO
PORTVERSION=	1.6.8
CATEGORIES=	archivers perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:BINGOS
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:R}${PORTVERSION:E}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	A POE filter wrapped around Compress::LZO

BUILD_DEPENDS=	p5-Compress-LZO>=1.08:${PORTSDIR}/archivers/p5-Compress-LZO \
		p5-POE>=0.38:${PORTSDIR}/devel/p5-POE
RUN_DEPENDS=	p5-Compress-LZO>=1.08:${PORTSDIR}/archivers/p5-Compress-LZO \
		p5-POE>=0.38:${PORTSDIR}/devel/p5-POE

PERL_CONFIGURE=	yes

MAN3=		POE::Filter::LZO.3

.include <bsd.port.mk>
