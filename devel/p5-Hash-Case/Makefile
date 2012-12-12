# New ports collection makefile for:	p5-Hash-Case
# Date created:		2006-08-15
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/devel/p5-Hash-Case/Makefile,v 1.8 2012/11/17 05:56:18 svnexp Exp $
#

PORTNAME=	Hash-Case
PORTVERSION=	1.010
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MARKOV
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:C/0*$//}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Base class for hashes with key-casing requirements

BUILD_DEPENDS=	p5-Log-Report>=0.26:${PORTSDIR}/devel/p5-Log-Report
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Hash::Case.3 Hash::Case::Lower.3 Hash::Case::Preserve.3 \
		Hash::Case::Upper.3

.include <bsd.port.mk>
