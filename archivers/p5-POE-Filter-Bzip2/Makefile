# New ports collection makefile for:	p5-POE-Filter-Bzip2
# Date created:		2006-07-28
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/archivers/p5-POE-Filter-Bzip2/Makefile,v 1.12 2012/11/17 05:54:22 svnexp Exp $
#

PORTNAME=	POE-Filter-Bzip2
PORTVERSION=	1.5.8
CATEGORIES=	archivers perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:R}${PORTVERSION:E}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	A POE filter wrapped around Compress::Bzip2

BUILD_DEPENDS=	p5-Compress-Bzip2>=2.08:${PORTSDIR}/archivers/p5-Compress-Bzip2 \
		p5-POE>=0.38:${PORTSDIR}/devel/p5-POE
RUN_DEPENDS=	p5-Compress-Bzip2>=2.08:${PORTSDIR}/archivers/p5-Compress-Bzip2 \
		p5-POE>=0.38:${PORTSDIR}/devel/p5-POE

PERL_CONFIGURE=	yes

MAN3=		POE::Filter::Bzip2.3

.include <bsd.port.mk>
