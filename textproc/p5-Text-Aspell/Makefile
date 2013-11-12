# Created by: lars.eggert@gmx.net
# $FreeBSD: textproc/p5-Text-Aspell/Makefile 333056 2013-11-07 03:52:41Z vanilla $

PORTNAME=	Text-Aspell
PORTVERSION=	0.09
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl interface to the GNU Aspell library

LIB_DEPENDS=	libaspell.so:${PORTSDIR}/textproc/aspell

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ARGS+=INC=-I${LOCALBASE}/include \
		"LIBS=-L${LOCALBASE}/lib -laspell"

.include <bsd.port.mk>
