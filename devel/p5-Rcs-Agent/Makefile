# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: devel/p5-Rcs-Agent/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Rcs-Agent
PORTVERSION=	1.05
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	nick@foobar.org
COMMENT=	A perl module for RCS archive manipulation

BUILD_DEPENDS=	p5-String-ShellQuote>1.00:${PORTSDIR}/textproc/p5-String-ShellQuote
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Rcs::Agent.3

NO_STAGE=	yes
.include <bsd.port.mk>
