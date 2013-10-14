# Created by: Erwin Lansing <erwin@FreeBSD.org>
# $FreeBSD: textproc/p5-Text-Quoted/Makefile 327773 2013-09-20 23:17:30Z bapt $

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

NO_STAGE=	yes
.include <bsd.port.mk>
