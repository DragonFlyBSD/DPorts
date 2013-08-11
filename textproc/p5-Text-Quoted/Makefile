# Created by: Erwin Lansing <erwin@FreeBSD.org>
# $FreeBSD: textproc/p5-Text-Quoted/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Text-Quoted
PORTVERSION=	2.08
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Text::Quoted - Extract the structure of a quoted mail message

BUILD_DEPENDS=	p5-Text-Autoformat>=0:${PORTSDIR}/textproc/p5-Text-Autoformat
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Text::Quoted.3

.include <bsd.port.mk>
