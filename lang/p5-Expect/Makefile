# Created by: Will Andrews <andrews@technologist.com>
# $FreeBSD: lang/p5-Expect/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Expect
PORTVERSION=	1.21
CATEGORIES=	lang perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module inspired by the Tcl version of Expect

BUILD_DEPENDS=	p5-IO-Tty>=1.03:${PORTSDIR}/devel/p5-IO-Tty
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Expect.3

.include <bsd.port.mk>
