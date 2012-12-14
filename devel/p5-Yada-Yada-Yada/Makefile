# New ports collection makefile for:	Yada-Yada-Yada
# Date created:				21 May 2006
# Whom:					Aaron Dalton <aaron@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Yada-Yada-Yada/Makefile,v 1.8 2012/11/17 05:56:36 svnexp Exp $
#

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

MAN3=	Yada::Yada::Yada.3

PERL_CONFIGURE=	yes

.include <bsd.port.mk>
