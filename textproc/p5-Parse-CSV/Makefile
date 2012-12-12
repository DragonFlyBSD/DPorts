# New ports collection makefile for:	p5-Parse-CSV
# Date created:		2006-10-19
# Whom:			Jin-Shan Tseng <tjs@cdpa.nsysu.edu.tw>
#
# $FreeBSD: ports/textproc/p5-Parse-CSV/Makefile,v 1.4 2012/11/17 06:02:06 svnexp Exp $
#

PORTNAME=	Parse-CSV
PORTVERSION=	2.00
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tjs@cdpa.nsysu.edu.tw
COMMENT=	Highly flexible CVS parser for large files

BUILD_DEPENDS=	p5-Params-Util>=0.22:${PORTSDIR}/devel/p5-Params-Util \
		p5-Text-CSV_XS>=0.42:${PORTSDIR}/textproc/p5-Text-CSV_XS
RUN_DEPENDS=	p5-Params-Util>=0.22:${PORTSDIR}/devel/p5-Params-Util \
		p5-Text-CSV_XS>=0.42:${PORTSDIR}/textproc/p5-Text-CSV_XS

PERL_CONFIGURE=	yes

MAN3=		Parse::CSV.3

.include <bsd.port.mk>
