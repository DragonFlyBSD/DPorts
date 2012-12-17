# New ports collection makefile for:	String-Checker
# Date created:				Mon Jan  1 11:03:15 2001
# Whom:					will
#
# $FreeBSD: ports/devel/p5-String-Checker/Makefile,v 1.11 2012/11/17 05:56:29 svnexp Exp $
#

PORTNAME=	String-Checker
PORTVERSION=	0.03
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl module implementing an extensible string validation interface

BUILD_DEPENDS=	p5-Date-Manip>=0:${PORTSDIR}/devel/p5-Date-Manip
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		String::Checker.3

.include <bsd.port.mk>
