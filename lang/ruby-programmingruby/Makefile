# New ports collection makefile for:		Programming Ruby--The Book
# Date created:			8 March 2001
# Whom:				Akinori MUSHA aka knu <knu@idaemons.org>
#
# $FreeBSD: ports/lang/ruby-programmingruby/Makefile,v 1.16 2012/11/17 05:58:56 svnexp Exp $
#

PORTNAME=	programmingruby
PORTVERSION=	0.4
PORTREVISION=	2
CATEGORIES=	lang ruby
MASTER_SITES=	http://dev.rubycentral.com/downloads/files/
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}
DISTNAME=	ProgrammingRuby-${PORTVERSION}
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	ruby
EXTRACT_ONLY=	#empty

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	The source of the Programming Ruby ("pick-axe") book in XML and HTML

USE_RUBY=	yes
RUBY_NO_BUILD_DEPENDS=	yes
RUBY_NO_RUN_DEPENDS=	yes

NO_BUILD=	yes
NO_WRKSUBDIR=	yes
DOCSDIR=	${RUBY_MODDOCDIR}

do-install:
	${MKDIR} ${RUBY_MODDOCDIR}
	@${TAR} -xzf ${DISTDIR}/${DIST_SUBDIR}/${DISTFILES} -C ${RUBY_MODDOCDIR}
	@${FIND} ${RUBY_MODDOCDIR}/ -type f -exec ${CHMOD} ${SHAREMODE} {} \;
	@${FIND} ${RUBY_MODDOCDIR}/ -type d -exec ${CHMOD} 755 {} \;
	@${FIND} ${RUBY_MODDOCDIR}/ -exec ${CHOWN} ${SHAREOWN}:${SHAREGRP} {} \;
	@${FIND} -d ${RUBY_MODDOCDIR}/ -type f | \
		${SED} -e 's,^${PREFIX}/,,' >> ${TMPPLIST}
	@${FIND} -d ${RUBY_MODDOCDIR}/ -type d | \
		${SED} -e 's,^${PREFIX}/,@dirrm ,' >> ${TMPPLIST}
	@${ECHO_CMD} "@unexec rmdir ${RUBY_DOCDIR} 2>/dev/null || true" \
		>> ${TMPPLIST}

.include <bsd.port.mk>
