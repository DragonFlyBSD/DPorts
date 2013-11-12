# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: devel/p5-Yada-Yada-Yada/Makefile 332248 2013-10-31 15:02:49Z vanilla $

PORTNAME=	Yada-Yada-Yada
PORTVERSION=	1.00
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:TMTM
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Adds a Yada-Yada-Yada operator (...) to Perl 5

BUILD_DEPENDS=	p5-Filter-Simple>=0:${PORTSDIR}/textproc/p5-Filter-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
