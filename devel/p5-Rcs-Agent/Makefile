# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: ports/devel/p5-Rcs-Agent/Makefile,v 1.9 2013/01/27 17:43:00 svnexp Exp $

PORTNAME=	Rcs-Agent
PORTVERSION=	1.05
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	nick@foobar.org
COMMENT=	A perl module for RCS archive manipulation

BUILD_DEPENDS=	p5-String-ShellQuote>1.00:${PORTSDIR}/textproc/p5-String-ShellQuote
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Rcs::Agent.3

.include <bsd.port.mk>
