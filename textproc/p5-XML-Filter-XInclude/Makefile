# New ports collection makefile for:	XML::Filter::XInclude
# Date created:		28 Jan 2002
# Whom:			Sergey Skvortsov <skv@FreeBSD.org>
#
# $FreeBSD: ports/textproc/p5-XML-Filter-XInclude/Makefile,v 1.6 2012/11/17 06:02:12 svnexp Exp $
#

PORTNAME=	XML-Filter-XInclude
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	XInclude as a SAX Filter

BUILD_DEPENDS=	p5-URI>=0:${PORTSDIR}/net/p5-URI \
		p5-XML-SAX>=0:${PORTSDIR}/textproc/p5-XML-SAX \
		p5-XML-SAX-Writer>=0:${PORTSDIR}/textproc/p5-XML-SAX-Writer
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAKE_JOBS_UNSAFE=	yes

PERL_CONFIGURE=	yes

MAN3=		XML::Filter::XInclude.3

.include <bsd.port.mk>
