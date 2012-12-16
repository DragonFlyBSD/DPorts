# New ports collection makefile for:	p5-Text-CSV-Simple
# Date Created:				17 Dec, 2005
# Whom:					Jun Kuriyama <kuriyama@FreeBSD.org>
#
# $FreeBSD: ports/textproc/p5-Text-CSV-Simple/Makefile,v 1.5 2012/11/17 06:02:09 svnexp Exp $
#

PORTNAME=	Text-CSV-Simple
PORTVERSION=	1.00
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl module for Simpler parsing of CSV files

BUILD_DEPENDS=	p5-Text-CSV_XS>=0:${PORTSDIR}/textproc/p5-Text-CSV_XS \
		p5-File-Slurp>=0:${PORTSDIR}/devel/p5-File-Slurp \
		p5-Class-Trigger>=0:${PORTSDIR}/devel/p5-Class-Trigger
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Text::CSV::Simple.3

.include <bsd.port.mk>
