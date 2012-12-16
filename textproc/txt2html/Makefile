# New ports collection makefile for:    txt2html
# Date created:         29 Jun 1998
# Whom:                 Don Croyle <croyle@gelemna.org>
#
# $FreeBSD: ports/textproc/txt2html/Makefile,v 1.28 2012/11/17 06:02:23 svnexp Exp $
#

PORTNAME=	txt2html
PORTVERSION=	2.51
CATEGORIES=	textproc perl5
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	jadawin@FreeBSD.org
COMMENT=	Convert raw text to something with a little HTML formatting

BUILD_DEPENDS=	p5-Getopt-ArgvFile>=0:${PORTSDIR}/devel/p5-Getopt-ArgvFile \
		p5-YAML-Syck>=0:${PORTSDIR}/textproc/p5-YAML-Syck
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_MODBUILD=	yes

MAN1=	txt2html.1
MAN3=	HTML::TextToHTML.3

.include <bsd.port.mk>
