# Support rubygem packages
#
# Feature:	gem
# Usage:	USES=gem[:noautoplist]
# Valid args:	noautoplist	Don't generate the plist automatically
#
# MAINTAINER: ruby@FreeBSD.org

.if !defined(_INCLUDE_USES_GEM_MK)

_INCLUDE_USES_GEM_MK=        yes

_valid_ARGS=	noautoplist

# Sanity check
.  for arg in ${gem_ARGS}
.    if empty(_valid_ARGS:M${arg})
IGNORE= Incorrect 'USES+= gem:${gem_ARGS}' usage: argument [${arg}] is not recognized
.    endif
.  endfor

# "USES=gem" implies "USES=ruby"
.include "${USESDIR}/ruby.mk"

PKGNAMEPREFIX?=	rubygem-
EXTRACT_SUFX=	.gem
# disabled to be able that extract other archives into the gem folder like cargo archives which are required to compile gems that require rust
#EXTRACT_ONLY?=

BUILD_DEPENDS+=	${RUBYGEMBIN}:devel/ruby-gems
EXTRACT_DEPENDS+=	${RUBYGEMBIN}:devel/ruby-gems
RUN_DEPENDS+=	${RUBYGEMBIN}:devel/ruby-gems

GEMS_BASE_DIR=	lib/ruby/gems/${RUBY_VER}
CACHE_DIR=	${GEMS_BASE_DIR}/cache
DOC_DIR=	${GEMS_BASE_DIR}/doc
EXT_DIR=	${GEMS_BASE_DIR}/extensions
GEMS_DIR=	${GEMS_BASE_DIR}/gems
PLUGINS_DIR=	${GEMS_BASE_DIR}/plugins
SPEC_DIR=	${GEMS_BASE_DIR}/specifications
GEM_NAME?=	${DISTNAME}
GEM_LIB_DIR?=	${GEMS_DIR}/${GEM_NAME}
GEM_DOC_DIR?=	${DOC_DIR}/${GEM_NAME}
GEM_SPEC?=	${SPEC_DIR}/${GEM_NAME}.gemspec
GEM_CACHE?=	${CACHE_DIR}/${GEM_NAME}.gem
GEMSPEC=	${PORTNAME}.gemspec
GEM_ENV+=	RB_USER_INSTALL=yes

USE_LOCALE?=	en_US.UTF-8
GEM_ENV+=	LANG=${USE_LOCALE} LC_ALL=${USE_LOCALE}

PLIST_SUB+=	PORTVERSION="${PORTVERSION}" \
		REV="${RUBY_GEM}" \
		GEMS_BASE_DIR="${GEMS_BASE_DIR}" \
		GEMS_DIR="${GEMS_DIR}" \
		DOC_DIR="${DOC_DIR}" \
		CACHE_DIR="${CACHE_DIR}" \
		SPEC_DIR="${SPEC_DIR}" \
		EXT_DIR="${EXT_DIR}" \
		PLUGINS_DIR="${PLUGINS_DIR}" \
		GEM_NAME="${GEM_NAME}" \
		GEM_LIB_DIR="${GEM_LIB_DIR}" \
		GEM_DOC_DIR="${GEM_DOC_DIR}" \
		GEM_SPEC="${GEM_SPEC}" \
		GEM_CACHE="${GEM_CACHE}" \
		EXTRACT_SUFX="${EXTRACT_SUFX}"

RUBYGEMBIN=	${LOCALBASE}/bin/gem

.  if defined(GEMS_SKIP_SUBDIR)
# do not define a DIST_SUBDIR, currently required to have cargo archives available in the gem source directory to be able to compile it
#DIST_SUBDIR=
.  else
DIST_SUBDIR=	rubygem
.  endif

.  if defined(DISTFILES)
# this should maybe be reworked, as if a gem port is used together with cargo archives, the DISTFILES also includes the cargo archives
# this is currently overwritten in the port that requires this
# the cargo archives should be filtered out here or better we should only have here gem archives included
GEMFILES?=	${DISTFILES:C/:[^:]+$//}
.  else
GEMFILES?=	${DISTNAME}${EXTRACT_SUFX}
.  endif

RUBYGEM_ARGS=-l --no-update-sources --install-dir ${STAGEDIR}${PREFIX}/lib/ruby/gems/${RUBY_VER} --ignore-dependencies --bindir=${STAGEDIR}${PREFIX}/bin

# Until we figure out why generating the documentation (rdoc, ri)
# freezes randomly with a 100% CPU usage we'll disable the documentation
# generation entirely
RUBYGEM_ARGS+=	--no-document

_USES_extract+=	590:gem-extract
gem-extract:
	@${SETENVI} ${WRK_ENV} ${GEM_ENV} ${RUBYGEMBIN} unpack --target=${WRKDIR} ${DISTDIR}/${DIST_SUBDIR}/${GEMFILES}
	@(cd ${BUILD_WRKSRC}; if ! ${SETENVI} ${WRK_ENV} ${GEM_ENV} ${RUBYGEMBIN} spec --ruby ${DISTDIR}/${DIST_SUBDIR}/${GEMFILES} > ${GEMSPEC} ; then \
		if [ -n "${BUILD_FAIL_MESSAGE}" ] ; then \
			${ECHO_MSG} "===> Extraction failed unexpectedly."; \
			(${ECHO_CMD} "${BUILD_FAIL_MESSAGE}") | ${FMT_80} ; \
			fi; \
		${FALSE}; \
		fi)

.  if !target(do-build)
do-build:
	@(cd ${BUILD_WRKSRC}; if ! ${SETENVI} ${WRK_ENV} ${GEM_ENV} ${RUBYGEMBIN} build --force ${GEMSPEC} ; then \
		if [ -n "${BUILD_FAIL_MESSAGE}" ] ; then \
			${ECHO_MSG} "===> Compilation failed unexpectedly."; \
			(${ECHO_CMD} "${BUILD_FAIL_MESSAGE}") | ${FMT_80} ; \
			fi; \
		${FALSE}; \
		fi)
.  endif

.  if !target(do-install)
do-install:
	(cd ${BUILD_WRKSRC}; ${SETENVI} ${WRK_ENV} ${GEM_ENV} ${RUBYGEMBIN} install ${RUBYGEM_ARGS} ${GEMFILES} -- ${CONFIGURE_ARGS})
	${RM} -r ${STAGEDIR}${PREFIX}/${GEMS_BASE_DIR}/build_info/
	${FIND} ${STAGEDIR}${PREFIX}/${GEMS_BASE_DIR} -type f -name '*.so' -exec ${STRIP_CMD} {} +
	${FIND} ${STAGEDIR}${PREFIX}/${GEMS_BASE_DIR} -type f \( -name mkmf.log -or -name gem_make.out \) -delete
	${FIND} ${STAGEDIR}${PREFIX}/${GEM_LIB_DIR}/ext -type f -not -name '*.so' -delete 2> /dev/null || ${TRUE}
	${FIND} ${STAGEDIR}${PREFIX}/${GEM_LIB_DIR}/ext -type d -empty -delete 2> /dev/null || ${TRUE}
	${RM} -r ${STAGEDIR}${PREFIX}/${CACHE_DIR} 2> /dev/null || ${TRUE}
	${RMDIR} ${STAGEDIR}${PREFIX}/${EXT_DIR} 2> /dev/null || ${TRUE}
	${RMDIR} ${STAGEDIR}${PREFIX}/${PLUGINS_DIR} 2> /dev/null || ${TRUE}
#.    if !${PORT_OPTIONS:MDOCS}
	-@${RMDIR} ${STAGEDIR}${PREFIX}/${DOC_DIR}
#.    endif
.  endif

.  if empty(gem_ARGS:Mnoautoplist)
_USES_install+=	820:gem-autoplist
gem-autoplist:
	@${ECHO_CMD} ${GEM_SPEC} >> ${TMPPLIST}
.    if ${PORT_OPTIONS:MDOCS}
	@${FIND} -ds ${STAGEDIR}${PREFIX}/${DOC_DIR} -type f -print | ${SED} -E -e \
		's,^${STAGEDIR}${PREFIX}/?,,' >> ${TMPPLIST}
.    endif
	@${FIND} -ds ${STAGEDIR}${PREFIX}/${GEM_LIB_DIR} -type f -print | ${SED} -E -e \
		's,^${STAGEDIR}${PREFIX}/?,,' >> ${TMPPLIST}
	@if [ -d ${STAGEDIR}${PREFIX}/${EXT_DIR} ]; then \
		${FIND} -ds ${STAGEDIR}${PREFIX}/${EXT_DIR} -type f -print | ${SED} -E -e \
		's,^${STAGEDIR}${PREFIX}/?,,' >> ${TMPPLIST} ; \
	fi
	@if [ -d ${STAGEDIR}${PREFIX}/${PLUGINS_DIR} ]; then \
		${FIND} -ds ${STAGEDIR}${PREFIX}/${PLUGINS_DIR} -type f -print | ${SED} -E -e \
		's,^${STAGEDIR}${PREFIX}/?,,' >> ${TMPPLIST} ; \
	fi
.  endif

.endif
