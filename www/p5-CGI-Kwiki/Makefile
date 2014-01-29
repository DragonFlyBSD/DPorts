# Created by: clsung@dragon2.net
# $FreeBSD: www/p5-CGI-Kwiki/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	CGI-Kwiki
PORTVERSION=	0.18
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Quickie Wiki Package that's not too Tricky

BUILD_DEPENDS=	p5-CGI.pm>=0:${PORTSDIR}/www/p5-CGI.pm
RUN_DEPENDS:=	${BUILD_DEPENDS} \
		p5-Locale-Maketext>=0:${PORTSDIR}/devel/p5-Locale-Maketext

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
