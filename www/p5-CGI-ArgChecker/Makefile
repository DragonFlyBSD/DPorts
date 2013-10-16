# Created by: will
# $FreeBSD: www/p5-CGI-ArgChecker/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	CGI-ArgChecker
PORTVERSION=	0.02
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl module implementing a cgi interface to String::Checker

BUILD_DEPENDS=	p5-String-Checker>=0:${PORTSDIR}/devel/p5-String-Checker
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		CGI::ArgChecker.3

NO_STAGE=	yes
.include <bsd.port.mk>
