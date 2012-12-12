# New ports collection makefile for:	p5-Text-Report
# Date created:		2007-07-07
# Whom:			Tsung-Han Yeh <snowfly@yuntech.edu.tw>
#
# $FreeBSD: ports/textproc/p5-Text-Report/Makefile,v 1.6 2012/11/17 06:02:10 svnexp Exp $
#

PORTNAME=	Text-Report
PORTVERSION=	1.004
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	snowfly@yuntech.edu.tw
COMMENT=	For generating mixed columnar formatted reports and report templates

RUN_DEPENDS=	p5-Test-Simple>=0:${PORTSDIR}/devel/p5-Test-Simple
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Text::Report.3

.include <bsd.port.mk>
