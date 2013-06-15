# Created by: Gea-Suan Lin
# $FreeBSD: devel/p5-Hash-Case/Makefile 320494 2013-06-10 17:12:21Z mat $

PORTNAME=	Hash-Case
PORTVERSION=	1.020
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
