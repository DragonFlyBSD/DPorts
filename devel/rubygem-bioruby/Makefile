# New ports collection makefile for:	rubygem-bioruby
# Date created:		20 June, 2009
# Whom:			Wen Heping <wenheping@gmail.com>
#
# $FreeBSD: ports/devel/rubygem-bioruby/Makefile,v 1.9 2012/11/17 05:56:58 svnexp Exp $
#

PORTNAME=	bioruby
PORTVERSION=	1.4.3
CATEGORIES=	devel rubygems
MASTER_SITES=	RF RG
DISTNAME=	bio-${PORTVERSION}

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Integrated environment for Bioinformatics written in Ruby

PLIST_FILES=	bin/bioruby \
		bin/br_biofetch.rb \
		bin/br_bioflat.rb \
		bin/br_biogetseq.rb \
		bin/br_pmfetch.rb

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes
GEM_NAME=	${DISTNAME}

.include <bsd.port.mk>
